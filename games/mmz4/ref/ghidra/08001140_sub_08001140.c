// sub_08001140 at 0x08001140 (thumb)

undefined4 sub_08001140(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((uVar1 < 0xa0) || (uVar1 == 0xe3)) {
    *DAT_03001738 = *DAT_03001740;
    DAT_03001740 = DAT_03001740 + 1;
  }
  return in_lr;
}

