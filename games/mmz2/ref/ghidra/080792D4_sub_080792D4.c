// sub_080792D4 at 0x080792D4 (thumb)

undefined4 sub_080792D4(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(iVar4 + 0xc) < 2) && (*(char *)(iVar4 + 0xd) != '\t')) &&
     (*(char *)(iVar4 + 0xd) != '\x12')) {
    if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar2;
      sVar1 = sub_08008CFC(iVar4,iVar2 + -0x800);
      if ((sVar1 == 0) &&
         (cVar3 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar3, cVar3 != '\0'))
      {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      cVar3 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    if (cVar3 != '\0') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0x10) == '\x02') {
        *(undefined *)(iVar4 + 0xc1) = 1;
        sub_080A2100(iVar2,param_1 + 0x54,*(char *)(param_1 + 0x11) + '\x05',
                     ~(*(byte *)(iVar4 + 10) >> 4) & 1);
      }
      else {
        *(undefined *)(iVar4 + 0xc1) = 0;
        sub_080A2100(iVar2,param_1 + 0x54,*(char *)(param_1 + 0x11) + '\x03',
                     ~(*(byte *)(iVar4 + 10) >> 4) & 1);
      }
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      *(char *)(iVar4 + 0xcc) = *(char *)(iVar4 + 0xcc) + -1;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

