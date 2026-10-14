// sub_0808F310 at 0x0808F310 (thumb)

undefined4 sub_0808F310(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar1 = (byte *)(param_1 + 0xc0);
    if (*pbVar1 == 0xc) {
      sub_08017700(param_1,0x7700);
      sub_080177F4(param_1);
      sub_08007390(param_1 + 0x74,&DAT_08365d04);
    }
    else {
      sub_080177CC(param_1,0x7701,*pbVar1,3);
      sub_080177F4(param_1);
      sub_08007390(param_1 + 0x74,&DAT_08365bfc + (uint)(byte)(&DAT_08365d4c)[*pbVar1] * 0x18);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

