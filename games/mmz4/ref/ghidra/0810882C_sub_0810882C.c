// sub_0810882C at 0x0810882C (thumb)

void sub_0810882C(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  DAT_0202eda8 = param_1;
  sub_081284E4(&local_18,param_1,0x1000000);
  local_14 = 0;
  sub_081284E8(&local_14,param_1,&DAT_05000007);
  uVar3 = 0;
  do {
    pbVar2 = (byte *)(DAT_0202eda8 + (uVar3 >> 1));
    iVar1 = (uVar3 & 1) << 2;
    *pbVar2 = (byte)(9 << iVar1) | *pbVar2 & ~(byte)(0xf << iVar1);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x33);
                    /* WARNING: Could not recover jumptable at 0x08108882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

