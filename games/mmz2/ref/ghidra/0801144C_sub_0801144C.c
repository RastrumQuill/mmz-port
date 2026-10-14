// sub_0801144C at 0x0801144C (thumb)

undefined4 sub_0801144C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002D68(0x45,0);
    DAT_0202e038 = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x5a0) {
    DAT_0202e038 = 0x80;
  }
  if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
    DAT_0202e038 = DAT_0202e038 + 1;
  }
  sub_08002EA0(0x45);
  return in_lr;
}

