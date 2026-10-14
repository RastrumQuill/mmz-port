// sub_08019338 at 0x08019338 (thumb)

undefined4 sub_08019338(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (DAT_0202dad4 == '\b') {
      *(undefined4 *)(param_1 + 0x50) = 0xa0;
      (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
           (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
      *(undefined *)(param_1 + 0xf) = 3;
      return in_lr;
    }
    if (DAT_0202dad4 != '\x06') {
      return in_lr;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined *)(param_1 + 0x68) = 0xa0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 2:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    cVar1 = *(char *)(param_1 + 0x68) + -1;
    *(char *)(param_1 + 0x68) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    break;
  case 3:
    DAT_0202dad4 = '\b';
    uVar2 = *(uint *)(param_1 + 0x5c) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar2] = (ushort)uVar3 | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    sub_081284E4(&DAT_08b5d5c0,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    break;
  default:
    goto switchD_08019356_caseD_4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08019356_caseD_4:
  return in_lr;
}

