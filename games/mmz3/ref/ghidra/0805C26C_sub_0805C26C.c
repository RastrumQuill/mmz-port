// sub_0805C26C at 0x0805C26C (thumb)

undefined4 sub_0805C26C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4aec) {
      sub_08017700(param_1,0xb515);
    }
    else {
      sub_08017700(param_1,0xb507);
    }
    sub_08007390(param_1 + 0x74,&DAT_083616c0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

