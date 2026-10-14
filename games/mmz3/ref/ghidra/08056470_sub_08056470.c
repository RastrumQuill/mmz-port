// sub_08056470 at 0x08056470 (thumb)

undefined4 sub_08056470(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb303);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      bVar1 = *(byte *)(param_1 + 0xc5);
      if (bVar1 == 1) {
        sub_080A8324(param_1,0,6);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          sub_080A7E64(param_1,0,0);
          sub_0800471C(0x46);
        }
      }
      else if (bVar1 == 2) {
        sub_080A8AC8(param_1,0,0);
        sub_0800471C(0x49);
      }
      else if (bVar1 == 3) {
        sub_080A8AC8(param_1,3,0);
        sub_0800471C(0x46);
      }
      uVar2 = 0;
    }
    else {
      sub_080A7E64(param_1,1,0);
      *(char *)(param_1 + 0xc6) = '\0';
      sub_0800471C(0x46);
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 199) = uVar2;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 == '\0') {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x12;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

