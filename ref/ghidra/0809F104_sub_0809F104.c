// sub_0809F104 at 0x0809F104 (thumb)

undefined4 sub_0809F104(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  sub_08001EE8((int)*(short *)(param_1 + 200));
  *(short *)(param_1 + 200) = -1;
  sub_0809C6A4(param_1);
  return in_lr;
}

