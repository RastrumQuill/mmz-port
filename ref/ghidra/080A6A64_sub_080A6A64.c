// sub_080A6A64 at 0x080A6A64 (thumb)

undefined4 sub_080A6A64(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    sub_080961DC(param_1,0);
    sub_080961DC(param_1,2);
    sub_080961DC(param_1,3);
    sub_080961DC(param_1,4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

