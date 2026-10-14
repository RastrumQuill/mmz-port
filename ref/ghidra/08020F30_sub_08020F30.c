// sub_08020F30 at 0x08020F30 (thumb)

undefined4 sub_08020F30(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_02022cb0 == 0) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    DAT_02004fa0 = DAT_02004fa0 & 0xfe;
  }
  sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  return in_lr;
}

