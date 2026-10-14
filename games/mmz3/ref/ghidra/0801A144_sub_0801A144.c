// sub_0801A144 at 0x0801A144 (thumb)

undefined4 sub_0801A144(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(byte)DAT_020301a0;
  DAT_020301a3 = 0xff;
  DAT_020301ac = 0;
  DAT_020301a8 = 0;
  DAT_0203031d = 0;
  DAT_0203031c = 0;
  DAT_02030324 = 0xffffffff;
  DAT_02030318 = param_1;
  sub_0801ACAC();
  sub_0801A754(&DAT_02030288,&DAT_08349544,param_1);
  sub_08008BEC(*(undefined4 *)(&DAT_08349458 + uVar1 * 4),&DAT_020302c0);
  if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_08349530)[uVar1]) == 0) {
    sub_08017D2C((&DAT_08349444)[uVar1],0);
  }
  else {
    sub_08017D2C((&DAT_08349444)[uVar1],1);
  }
  sub_08021C44(&DAT_020301b0,uVar1);
  return in_lr;
}

