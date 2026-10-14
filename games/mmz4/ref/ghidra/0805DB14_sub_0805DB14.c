// sub_0805DB14 at 0x0805DB14 (thumb)

undefined4 sub_0805DB14(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if ((0x19000 < (DAT_0202ea30 - *(int *)(param_1 + 0x54)) + 0xc800U) ||
     (0x16000 < (DAT_0202ea34 - *(int *)(param_1 + 0x58)) + 0xb000U)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xd4);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0xb000;
  }
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb4) + -0x6a40) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xe) = uVar1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088554c4 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

