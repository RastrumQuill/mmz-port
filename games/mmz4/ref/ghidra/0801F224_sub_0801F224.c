// sub_0801F224 at 0x0801F224 (thumb)

undefined4 sub_0801F224(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(byte)DAT_0202e910;
  DAT_0202e913 = 0xff;
  DAT_0202e91c = 0;
  DAT_0202e918 = 0;
  DAT_0202ea8d = 0;
  DAT_0202ea8c = 0;
  DAT_0202ea94 = 0xffffffff;
  DAT_0202ea88 = param_1;
  sub_0801FE18();
  sub_0801F884(&DAT_0202e9f8,&DAT_0883f6ac,param_1);
  sub_08006A94(*(undefined4 *)(&DAT_0883f5b4 + uVar1 * 4),&DAT_0202ea30);
  if ((*(uint *)(DAT_0202e8e0 + 0x10) & 1 << (&DAT_0883f698)[uVar1]) == 0) {
    sub_0801D530((&DAT_0883f5a0)[uVar1],0);
  }
  else {
    sub_0801D530((&DAT_0883f5a0)[uVar1],1);
  }
  sub_080274B8(&DAT_0202e920,uVar1);
  return in_lr;
}

