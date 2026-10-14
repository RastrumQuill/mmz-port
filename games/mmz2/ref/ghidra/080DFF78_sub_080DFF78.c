// sub_080DFF78 at 0x080DFF78 (thumb)

undefined4 sub_080DFF78(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  sub_080EF11C(param_1,param_2,*(undefined4 *)(&DAT_0835e31c + (uint)*(byte *)(param_1 + 6) * 4));
  if (((DAT_02000d14 & 8) != 0) && (*(byte *)(param_1 + 6) < 2)) {
    *(undefined *)(param_1 + 6) = 2;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

