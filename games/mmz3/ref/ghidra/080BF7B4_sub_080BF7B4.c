// sub_080BF7B4 at 0x080BF7B4 (thumb)

undefined8 sub_080BF7B4(undefined4 *param_1,undefined param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = 0;
  if (*(short *)(DAT_0203062c + 10) < 5) {
    uVar5 = *(ushort *)(DAT_0203062c + 10) - 1 & 0xff;
  }
  else {
    uVar5 = 5;
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = sub_0800710C(DAT_0203062c);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 1;
        *(undefined *)(iVar3 + 9) = 0x30;
        *(undefined4 *)(iVar3 + 0x14) = 0x80bf97d;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        uVar2 = param_1[1];
        *(undefined4 *)(iVar3 + 0x54) = *param_1;
        *(undefined4 *)(iVar3 + 0x58) = uVar2;
        *(undefined *)(iVar3 + 0x10) = 1;
        *(undefined *)(iVar3 + 0x11) = param_2;
        *(undefined *)(iVar3 + 0x77) = 0;
        cVar1 = FUN_080fe2f8(uVar4 << 8,uVar5);
        *(char *)(iVar3 + 0x75) = cVar1 + -0x40;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar5);
  }
  return CONCAT44(in_lr,iVar3);
}

