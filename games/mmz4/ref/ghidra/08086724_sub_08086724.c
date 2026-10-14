// sub_08086724 at 0x08086724 (thumb)

undefined4 sub_08086724(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  iVar1 = sub_080869A4();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_10 = (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800;
    local_c = (*(uint *)(param_1 + 0x58) & 0xfffff000) + 0x800;
    sub_0802AB70(7,0x2c,&local_10);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

