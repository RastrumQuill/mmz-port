// sub_0809B83C at 0x0809B83C (thumb)

undefined4 sub_0809B83C(int param_1)

{
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,3);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x7c) = DAT_0202164c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809B3B8(param_1);
  return in_lr;
}

