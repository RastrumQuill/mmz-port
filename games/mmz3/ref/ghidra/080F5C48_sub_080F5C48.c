// sub_080F5C48 at 0x080F5C48 (thumb)

undefined4 sub_080F5C48(int param_1,ushort param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xffff;
  if (param_2 == 2) {
    puVar1 = (ushort *)(param_3 * 2 + param_1);
    uVar2 = 0xa2;
  }
  else if (param_2 < 3) {
    if (param_2 != 1) goto LAB_080f5ca4;
    puVar1 = (ushort *)(param_3 * 2 + param_1);
    uVar2 = 0xa1;
  }
  else if (param_2 == 0x100) {
    puVar1 = (ushort *)(param_3 * 2 + param_1);
    uVar2 = 0xa5;
  }
  else {
    if (param_2 != 0x200) goto LAB_080f5ca4;
    puVar1 = (ushort *)(param_3 * 2 + param_1);
    uVar2 = 0xa4;
  }
  *puVar1 = (ushort)((param_4 & 0xff) << 0xc) | uVar2;
LAB_080f5ca4:
  if (param_3 < 0x140) {
    param_1 = param_3 * 2 + param_1;
    uVar2 = (short)(param_4 & 0xff) * 0x1000;
    *(ushort *)(param_1 + 4) = uVar2 | 0xcd;
    *(ushort *)(param_1 + 6) = uVar2 | 0xce;
    *(ushort *)(param_1 + 8) = uVar2 | 0xcf;
    *(ushort *)(param_1 + 10) = uVar2 | 0xd0;
    *(ushort *)(param_1 + 0xc) = uVar2 | 0xd1;
  }
  return in_lr;
}

