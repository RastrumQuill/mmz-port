// sub_08070ED8 at 0x08070ED8 (thumb)

undefined4 sub_08070ED8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((uVar1 & 0x200) == 0) {
    if ((DAT_0202ebbb & 0x20) == 0) {
      sub_080128D4(param_1);
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ecfc + (uint)*(byte *)(param_1 + 0x10) * 4));
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xc0);
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    if ((uVar1 & 0x8000) == 0) {
      sub_0807169C(param_1);
    }
    else {
      sub_080716F0(param_1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08070FC4(param_1);
  }
  return in_lr;
}

