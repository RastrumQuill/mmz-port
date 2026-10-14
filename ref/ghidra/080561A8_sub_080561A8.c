// sub_080561A8 at 0x080561A8 (thumb)

undefined4 sub_080561A8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
  *(char *)(param_1 + 0x1e) = cVar1;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afaac + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

