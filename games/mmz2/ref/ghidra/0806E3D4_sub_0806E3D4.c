// sub_0806E3D4 at 0x0806E3D4 (thumb)

undefined4 sub_0806E3D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      sub_080127E4(param_1,0x1518);
    }
    else {
      sub_080127E4(param_1,0x1519);
    }
    sub_0809B6BC(param_1,1,*(char *)(param_1 + 0xb7));
    sub_080032EC(0x91);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

