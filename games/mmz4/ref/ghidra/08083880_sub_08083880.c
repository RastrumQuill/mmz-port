// sub_08083880 at 0x08083880 (thumb)

undefined4 sub_08083880(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202e8b9 & 4) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08083C78(param_1);
    }
    else {
      sub_08083D0C(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

