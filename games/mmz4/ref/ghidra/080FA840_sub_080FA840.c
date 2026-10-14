// sub_080FA840 at 0x080FA840 (thumb)

undefined4 sub_080FA840(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  bool bVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined auStack_40 [4];
  byte abStack_3c [4];
  int local_38 [3];
  undefined *local_2c [3];
  
  local_2c[0] = (undefined *)&local_58;
  local_58 = 0x4d01;
  uStack_54 = 0x4d00;
  uStack_50 = 0x4d01;
  local_2c[1] = (undefined *)&local_4c;
  local_4c = 0xe001;
  uStack_48 = 0xe000;
  uStack_44 = 0xe001;
  local_2c[2] = auStack_40;
  sub_08128BBC(local_2c[2],0,3);
  sub_08128B5C(abStack_3c,&DAT_08129dd8,3);
  local_38[0] = -0x4800;
  local_38[1] = 0;
  local_38[2] = 0x4000;
  bVar5 = DAT_0202e910 == 0x10;
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + local_38[uVar4];
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  sub_0801CC9C(param_1);
  bVar1 = local_2c[2][uVar4];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_0801CF00(param_1,*(undefined2 *)(local_2c[bVar5] + uVar4 * 4));
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(&DAT_08867400 + (uint)abStack_3c[uVar4] * 4);
  *(undefined2 *)(param_1 + 0x26) = 0x201;
  sub_080FA97C(param_1);
  return in_lr;
}

