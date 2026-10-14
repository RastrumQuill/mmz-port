// sub_08033674 at 0x08033674 (thumb)

undefined4 sub_08033674(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    sub_0801CF00(param_1,0xb05);
  }
  else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xb05) {
    sub_0801CFC8(param_1,0x801,2,4);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar2 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar2);
  }
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_080334E8(param_1);
  }
  return in_lr;
}

