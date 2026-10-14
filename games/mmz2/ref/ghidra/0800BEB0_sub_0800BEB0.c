// sub_0800BEB0 at 0x0800BEB0 (thumb)

undefined4 sub_0800BEB0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_1c;
  undefined4 local_18;
  
  local_1c = (uint)*(byte *)(param_1 + 0xe);
  if (local_1c == 0) {
    local_18 = 0xa0;
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar1 = (&DAT_02000f94)[uVar2];
    (&DAT_02000f94)[uVar2] = uVar1 & 0xfffc | 3;
    sub_08005664(param_1 + 0x14,&local_1c,(uVar1 & 0x1f00) * 8 + 0x6000000);
    sub_080069A0(param_1 + 0x14,&DAT_02000f9c + uVar2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

