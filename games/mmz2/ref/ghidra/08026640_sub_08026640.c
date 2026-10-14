// sub_08026640 at 0x08026640 (thumb)

undefined4 sub_08026640(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x176) < 3) {
    if ((*(byte *)(param_1 + 0x176) < 2) &&
       ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) != 0)) {
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x202;
      sub_0801EA38(param_1,0x13,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    }
    else if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
      sub_0801EA38(param_1,0xf,3,6);
      sub_0801E6AC(0xd);
      sub_080266D4(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

