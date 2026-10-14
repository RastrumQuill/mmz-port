// sub_080ED8C8 at 0x080ED8C8 (thumb)

undefined4 sub_080ED8C8(int param_1)

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
          goto LAB_080ed9c2;
        }
        sub_08004230(0x40);
        DAT_02002400 = sVar3;
        *(undefined *)(param_1 + 6) = 0;
        uVar2 = 3;
      }
      else {
        if (bVar1 != 3) goto LAB_080ed9c2;
        if (*(short *)(param_1 + 8) != 0) {
          uVar4 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar4;
          DAT_02002402 = uVar4 & 0x1f | (0x10 - uVar4) * 0x100;
          goto LAB_080ed9c2;
        }
        uVar2 = 1;
        *(undefined *)(param_1 + 6) = 1;
      }
      *(undefined *)(param_1 + 5) = uVar2;
      goto LAB_080ed9c2;
    }
    if (bVar1 != 0) goto LAB_080ed9c2;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0x20;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(short *)(param_1 + 8) < 0x10) {
    uVar4 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar4;
    DAT_02002402 = uVar4 & 0x1f | (0x10 - uVar4) * 0x100;
  }
  if ((DAT_02002134 & 9) == 0) {
    if ((DAT_02002134 & 2) != 0) {
      sub_0800471C(3);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
    }
  }
  else {
    sub_0800471C(2);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_080ed9c2:
  sub_080041E4(0x40);
  sub_080E9604(&DAT_083731bd,0xc,2);
  sub_080E9604(&DAT_0836f268 +
               (ushort)(&DAT_0836e9d8)
                       [*(ushort *)(&DAT_0838b796 + (uint)*(byte *)(param_1 + 0x242) * 2)],2,4);
  return in_lr;
}

