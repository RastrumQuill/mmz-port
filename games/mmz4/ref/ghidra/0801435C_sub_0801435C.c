// sub_0801435C at 0x0801435C (thumb)

undefined4 sub_0801435C(void)

{
  undefined4 in_lr;
  
  if (*(int *)(DAT_020359b8 + 0x58) < 0x27001) {
    DAT_0202ea54 = 0x1e000;
    DAT_0202ea60 = 0x28000;
  }
  else {
    DAT_0202ea54 = 0x69000;
    DAT_0202ea60 = 0x280000;
  }
  return in_lr;
}

