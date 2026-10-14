// sub_08111A9C at 0x08111A9C (thumb)

undefined4 sub_08111A9C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar3 = *(short *)(param_1 + 10);
        if (sVar3 != 0) {
          sVar3 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar3;
          DAT_03002ec0 = (undefined)sVar3;
          DAT_03002ec1 = DAT_03002ec0;
          DAT_03002ec2 = DAT_03002ec0;
          goto LAB_08111b96;
        }
        sub_08002624(0x33);
        DAT_02000a40 = sVar3;
        *(undefined *)(param_1 + 6) = 0;
        uVar2 = 3;
      }
      else {
        if (bVar1 != 3) goto LAB_08111b96;
        if (*(short *)(param_1 + 8) != 0) {
          uVar4 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar4;
          DAT_02000a42 = uVar4 & 0x1f | (0x10 - uVar4) * 0x100;
          goto LAB_08111b96;
        }
        uVar2 = 1;
        *(undefined *)(param_1 + 6) = 1;
      }
      *(undefined *)(param_1 + 5) = uVar2;
      goto LAB_08111b96;
    }
    if (bVar1 != 0) goto LAB_08111b96;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0x20;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(short *)(param_1 + 8) < 0x10) {
    uVar4 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar4;
    DAT_02000a42 = uVar4 & 0x1f | (0x10 - uVar4) * 0x100;
  }
  if ((DAT_02000764 & 9) == 0) {
    if ((DAT_02000764 & 2) != 0) {
      sub_08002B10(3);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
    }
  }
  else {
    sub_08002B10(2);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_08111b96:
  sub_080025D8(0x33);
  sub_0810D214(&DAT_0886c106,0xc,2);
  sub_0810D214(&DAT_0886a17c +
               (ushort)(&DAT_08869ac0)
                       [*(ushort *)(&DAT_08885c42 + (uint)*(byte *)(param_1 + 0x246) * 2)],3,4);
  return in_lr;
}

