// sub_080BF8D8 at 0x080BF8D8 (thumb)

undefined4 sub_080BF8D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_0800AD24(param_1 + 0x54);
  }
  iVar1 = sub_0800ADF8(param_1 + 0x54);
  if (iVar1 != 0) {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08012580(param_1);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_083486d8 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080BF964(param_1);
  }
  return in_lr;
}

