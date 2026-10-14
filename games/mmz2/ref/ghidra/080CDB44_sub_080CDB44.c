// sub_080CDB44 at 0x080CDB44 (thumb)

undefined4 sub_080CDB44(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 10) = bVar1;
    if (*(byte *)(param_1 + 0x10) < 2) {
      *(byte *)(param_1 + 10) = bVar1 | 3;
      sub_08012580(param_1);
      sub_080127E4(param_1,0x7300);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CDBB0(param_1);
  }
  return in_lr;
}

