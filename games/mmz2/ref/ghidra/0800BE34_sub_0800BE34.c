// sub_0800BE34 at 0x0800BE34 (thumb)

undefined4 sub_0800BE34(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_1c;
  uint local_18;
  
  local_1c = (uint)*(byte *)(param_1 + 0xe);
  if (local_1c == 0) {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar1 = (&DAT_02000f94)[uVar2];
    (&DAT_02000f94)[uVar2] = uVar1 & 0xfffc | 3;
    local_18 = local_1c;
    sub_08005664(param_1 + 0x14,&local_1c,(uVar1 & 0x1f00) * 8 + 0x6000000);
    sub_080069A0(param_1 + 0x14,&DAT_02000f9c + uVar2);
    DAT_02000fd0 = 0x3b44;
    DAT_02000fd2 = 0xc04;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

