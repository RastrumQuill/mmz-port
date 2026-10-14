// sub_08080CCC at 0x08080CCC (thumb)

undefined4 sub_08080CCC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x29);
        local_24 = 0x28;
        local_20 = 0x30;
        sub_080B8048(param_1,param_1 + 0x54,&local_24,0,&DAT_083648c8,0x18);
        sub_08017700(param_1,0x2709);
        *(undefined *)(param_1 + 0x12) = 0x18;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 8;
      sub_080177F4(param_1);
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        local_1c = &DAT_0202f608;
        iVar5 = 2;
        do {
          uVar4 = *local_1c * 0x343fd + 0x269ec3;
          local_24 = *(int *)(param_1 + 0x54) + -0x800 + (uVar4 * 0x10 >> 0x14);
          uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
          local_20 = *(int *)(param_1 + 0x58) + -0x2000 + (uVar4 * 8 >> 0x13);
          uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
          *local_1c = uVar4 & 0x7fffffff;
          sub_080BA4C0(&local_24,uVar4 * 2 >> 0x11 & 1);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      local_24 = *(int *)(param_1 + 0x54);
      local_20 = *(int *)(param_1 + 0x58) + -0x800;
      sub_080B7C6C(param_1,&local_24,&DAT_083648ca,4);
      local_20 = local_20 + -0x800;
      sub_080B2484(1,&local_24);
      sub_0800471C(0x31);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08017700(param_1,0x2700);
    iVar3 = *(int *)(param_1 + 0x54) >> 8;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar3 = FUN_080fe2f8(iVar3,0xf0);
    *(int *)(param_1 + 0x54) = iVar3 * 0xf000 + 0xd000;
    iVar3 = *(int *)(param_1 + 0x58) >> 8;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = FUN_080fe2f8(iVar3,0xa0);
    iVar3 = iVar3 * 0xa000 + 0x6800;
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x68) = iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 4;
  sub_080177F4(param_1);
  if ((*(uint *)(iVar5 + 0xb4) & 2) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

