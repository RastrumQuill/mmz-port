// sub_0809023C at 0x0809023C (thumb)

undefined8 sub_0809023C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,1);
}

