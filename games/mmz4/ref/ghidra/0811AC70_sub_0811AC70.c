// sub_0811AC70 at 0x0811AC70 (thumb)

undefined4 sub_0811AC70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xde0) = 0;
  *(undefined *)(param_1 + 0xde1) = 0;
  sub_08001D30(&DAT_08b6c1b8,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c1c4,0);
  iVar1 = param_1 + 0xed8;
  sub_080027B8(iVar1,&DAT_08b2c000,0x16,0,0);
  sub_0811B3E4(param_1,iVar1);
  sub_08001F1C(iVar1,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  sub_0800249C(0x33,0);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

