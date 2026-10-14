// sub_080F412C at 0x080F412C (thumb)

undefined4 sub_080F412C(int param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  
  puVar1 = (uint *)(param_1 + 0x8c);
  if ((*puVar1 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar1 & 0x20000) != 0) {
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x03';
    }
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    DAT_0202dad5 = (byte)(1 << *(sbyte *)(param_1 + 0x11)) | DAT_0202dad5;
    sub_080F390C(param_1);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

