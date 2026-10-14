// sub_08037DB4 at 0x08037DB4 (thumb)

undefined4 sub_08037DB4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0xd01) {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      sub_0801CFC8(param_1,0xd01,2,2);
    }
  }
  else {
    sub_0801CFC8(param_1,0xd01,2,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CF00(param_1,0x2810);
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
      sub_08037C6C(param_1);
    }
  }
  return in_lr;
}

