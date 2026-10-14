// sub_080BF864 at 0x080BF864 (thumb)

undefined8 sub_080BF864(undefined4 *param_1,undefined param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar5 = 0;
  if (*(short *)(DAT_0203062c + 10) < 3) {
    uVar6 = *(ushort *)(DAT_0203062c + 10) - 1 & 0xff;
  }
  else {
    uVar6 = 3;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      iVar5 = sub_0800710C(DAT_0203062c);
      if (iVar5 != 0) {
        *(undefined *)(iVar5 + 0x25) = 1;
        *(undefined *)(iVar5 + 9) = 0x30;
        *(undefined4 *)(iVar5 + 0x14) = 0x80bf97d;
        *(undefined2 *)(iVar5 + 0x20) = 0;
        *(undefined *)(iVar5 + 0x22) = 0;
        uVar3 = param_1[1];
        *(undefined4 *)(iVar5 + 0x54) = *param_1;
        *(undefined4 *)(iVar5 + 0x58) = uVar3;
        *(undefined *)(iVar5 + 0x10) = 1;
        *(undefined *)(iVar5 + 0x11) = param_2;
        *(undefined *)(iVar5 + 0x77) = 1;
        if (param_3 == '\0') {
          cVar1 = FUN_080fe2f8(uVar7 << 8,uVar6);
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          cVar2 = ((byte)(uVar4 * 2 >> 0x11) & 0x1f) - 0x40;
        }
        else {
          cVar1 = FUN_080fe2f8(uVar7 << 8,uVar6);
          uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
          cVar2 = ((byte)(uVar4 * 2 >> 0x11) & 0x1f) + 0x40;
        }
        DAT_0202f608 = uVar4 & 0x7fffffff;
        *(char *)(iVar5 + 0x75) = cVar1 + cVar2;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < uVar6);
  }
  return CONCAT44(in_lr,iVar5);
}

