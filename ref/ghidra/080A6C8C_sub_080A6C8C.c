// sub_080A6C8C at 0x080A6C8C (thumb)

undefined4 sub_080A6C8C(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  uint local_2c [4];
  
  local_2c[0] = 0x15;
  local_2c[1] = 0x16;
  local_2c[2] = 0x17;
  local_2c[3] = 0x18;
  uVar1 = local_2c[param_2];
  if ((((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar1 >> 3] >> (uVar1 & 7) & 1U) == 0) &&
     (iVar2 = sub_08005458(DAT_02023118), iVar2 != 0)) {
    *(undefined *)(iVar2 + 9) = 0x1d;
    *(undefined4 *)(iVar2 + 0x14) = 0x80a6d3d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_020231aa;
    *(undefined *)(iVar2 + 0x1e) = DAT_0202313d;
    *(byte *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x4c) = *param_1;
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
    uVar1 = local_2c[param_2];
    (&DAT_02022ad4)[(int)uVar1 >> 3] = (byte)(1 << (uVar1 & 7)) | (&DAT_02022ad4)[(int)uVar1 >> 3];
  }
  return in_lr;
}

