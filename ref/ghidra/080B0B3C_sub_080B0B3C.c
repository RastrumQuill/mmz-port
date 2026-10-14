// sub_080B0B3C at 0x080B0B3C (thumb)

undefined4 sub_080B0B3C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x40) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6abc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080B0588(param_1);
  }
  return in_lr;
}

