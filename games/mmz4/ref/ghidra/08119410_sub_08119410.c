// sub_08119410 at 0x08119410 (thumb)

undefined8 sub_08119410(int param_1,undefined param_2)

{
  undefined4 in_lr;
  
  switch(param_2) {
  case 0:
    param_1 = 0x6e;
    break;
  case 1:
    param_1 = 0x6f;
    break;
  case 2:
    param_1 = 0x70;
    break;
  case 3:
    param_1 = *(byte *)(param_1 + 0xc3) + 199;
    break;
  case 4:
    param_1 = *(byte *)(param_1 + 0xc3) + 0xe1;
    break;
  case 5:
    param_1 = *(byte *)(param_1 + 0xc3) + 0xeb;
    break;
  case 6:
    param_1 = *(byte *)(param_1 + 0xc3) + 0xfa;
    break;
  case 7:
    param_1 = *(byte *)(param_1 + 0xc3) + 0x109;
  }
  return CONCAT44(in_lr,param_1);
}

