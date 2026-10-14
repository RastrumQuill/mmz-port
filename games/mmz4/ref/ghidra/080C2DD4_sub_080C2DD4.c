// sub_080C2DD4 at 0x080C2DD4 (thumb)

undefined4 sub_080C2DD4(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  byte abStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[0] = 0x4503;
  local_20[1] = 0x4502;
  sub_08128B5C(abStack_24,&DAT_08129a64,2);
  uVar1 = *(undefined *)(param_1 + 0xb4);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  sub_0801CC9C(param_1);
  sub_0801CF00(param_1,*(undefined2 *)(local_20 + uVar3));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08861fcc + (uint)abStack_24[uVar3] * 0x18,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (uVar3 != 0) {
    sub_080C2CAC(param_1,uVar3 - 1 & 0xff,uVar1);
  }
  sub_080C2EA0(param_1);
  return in_lr;
}

