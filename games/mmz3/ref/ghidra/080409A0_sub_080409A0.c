// sub_080409A0 at 0x080409A0 (thumb)

undefined4 sub_080409A0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0) {
      if (*(char *)(param_1 + 0xd) == '\x05') {
        iVar5 = *(int *)(param_1 + 0x54);
        iVar1 = iVar5 + 0x800;
        *(int *)(param_1 + 0x54) = iVar1;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar1 = iVar5 + -0x800;
        }
        *(int *)(param_1 + 0x54) = iVar1;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
      }
      *(undefined *)(param_1 + 0xd) = 0x12;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      if (DAT_0202e48c < *(int *)(param_1 + 0x58) + -0x1000) {
        iVar1 = 4;
        do {
          uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
          uVar4 = uVar2 & 0x7fffffff;
          if ((uVar2 * 2 >> 0x11 & 1) == 0) {
            uVar2 = uVar4 * 0x343fd + 0x269ec3;
            uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            sub_080B27F0(*(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1fff) - 0x1000),
                         *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 0x1fff) - 0x1000),0);
          }
          else {
            uVar2 = uVar4 * 0x343fd + 0x269ec3;
            uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar4 & 0x7fffffff;
            sub_080B27F0(*(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1fff) - 0x1000),
                         *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 0x1fff) - 0x1000),1);
          }
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
      }
      else {
        uVar3 = sub_080253D8(10,param_1,&DAT_0835e82c);
        *(undefined4 *)(param_1 + 0xb4) = uVar3;
      }
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

