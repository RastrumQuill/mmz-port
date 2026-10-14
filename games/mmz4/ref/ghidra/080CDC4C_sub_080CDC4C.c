// sub_080CDC4C at 0x080CDC4C (thumb)

undefined4 sub_080CDC4C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (-0x100 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(byte *)(param_1 + 0x13) < 4) {
        if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
          iVar2 = param_1 + 0x54;
          sub_080CD9A8(uVar3,iVar2,1,0);
          sub_080CD9A8(uVar3,iVar2,1,1);
          sub_080CD9A8(uVar3,iVar2,1,2);
          sub_080CD9A8(uVar3,iVar2,1,3);
        }
        else {
          iVar2 = param_1 + 0x54;
          sub_080CD9A8(uVar3,iVar2,1,4);
          sub_080CD9A8(uVar3,iVar2,1,5);
          sub_080CD9A8(uVar3,iVar2,1,6);
          sub_080CD9A8(uVar3,iVar2,1,7);
        }
        sub_08002B10(0x1b7);
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x28;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x3000 < uVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CDA3C(param_1);
  }
  return in_lr;
}

