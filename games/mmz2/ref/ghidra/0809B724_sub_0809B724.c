// sub_0809B724 at 0x0809B724 (thumb)

undefined4 sub_0809B724(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_08343790 + (uint)*(byte *)(param_1 + 0x10) * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0809B7BC(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

