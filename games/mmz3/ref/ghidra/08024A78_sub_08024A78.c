// sub_08024A78 at 0x08024A78 (thumb)

undefined8 sub_08024A78(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 1) == '\0') {
    iVar5 = sub_080E5F40(param_1,0,0);
    *(int *)(param_1 + 0x14) = iVar5;
    *(undefined2 *)(iVar5 + 0x74) = 0x18;
    *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x76) = 0x72;
    *(undefined2 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  }
  if (DAT_02030c1a == 0) {
    sVar4 = 0;
    sVar2 = *(short *)(param_1 + 6);
    *(short *)(param_1 + 4) = sVar2;
    if (DAT_0203df9e != 0) {
      if ((DAT_02002136 & 0x20) != 0) {
        if (sVar2 == 0) {
          uVar3 = (ushort)DAT_0203df9e;
        }
        else {
          uVar3 = sVar2 - 1;
        }
        *(ushort *)(param_1 + 6) = uVar3;
      }
      if (((DAT_02002136 & 0x10) != 0) &&
         (*(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1,
         (short)(ushort)DAT_0203df9e < *(short *)(param_1 + 6))) {
        *(undefined2 *)(param_1 + 6) = 0;
      }
    }
    if (*(short *)(param_1 + 4) != *(short *)(param_1 + 6)) {
      sub_0800471C(1);
    }
    if (*(short *)(param_1 + 6) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x74) = 0x18;
      if ((DAT_02002134 & 0xb) != 0) {
        uVar6 = 0;
        goto LAB_08024bee;
      }
    }
    else {
      if ((DAT_02002134 & 1) == 0) {
        if ((DAT_02002134 & 10) != 0) {
          *(ushort *)(param_1 + 6) = DAT_02002134 & 1;
        }
      }
      else {
        bVar1 = *(byte *)((int)&DAT_0203df90 + *(short *)(param_1 + 6) + 3);
        if (((int)(uint)*(byte *)(DAT_0203df90 + (uint)(bVar1 >> 2)) >> (bVar1 & 3) + 4 & 1U) == 0)
        {
          sVar4 = sub_080F865C(&DAT_02030ea0,(uint)bVar1,1);
          if (sVar4 == 0) {
            sVar4 = 0x101;
          }
        }
        else {
          sub_0800471C(4);
        }
      }
      *(short *)(*(int *)(param_1 + 0x14) + 0x74) = *(short *)(param_1 + 6) * 0x10 + 0x20;
    }
    if (sVar4 == 0) {
      sub_080E9604(&DAT_083711f6,1,0x12);
    }
    else if (sVar4 == 0x101) {
      sub_080EA2C8(0x101,1);
    }
    else {
      sub_080EA2C8(sVar4,0);
    }
  }
  uVar6 = 1;
LAB_08024bee:
  return CONCAT44(in_lr,uVar6);
}

