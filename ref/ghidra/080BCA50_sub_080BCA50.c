// sub_080BCA50 at 0x080BCA50 (thumb)

undefined4 sub_080BCA50(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) != '\x01') {
    if ((param_2 & 0xff) == 0) {
      sub_08001574(&DAT_087e0000,(DAT_02004f34 & 0xc) * 0x1000 + 0x5800);
    }
    else {
      iVar1 = (param_2 & 0xff) * 0x14;
      sub_08001574(&DAT_087e0000 + iVar1,(DAT_02004f34 & 0xc) * 0x1000 + 0x4c00);
      sub_0800179C(&UNK_087e000c + iVar1,0x20);
    }
  }
  return in_lr;
}

