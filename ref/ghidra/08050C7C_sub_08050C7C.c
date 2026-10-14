// sub_08050C7C at 0x08050C7C (thumb)

undefined4 sub_08050C7C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af434 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_08050CC8(param_1);
  }
  return in_lr;
}

