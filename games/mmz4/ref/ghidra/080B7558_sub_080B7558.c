// sub_080B7558 at 0x080B7558 (thumb)

undefined4 sub_080B7558(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x12);
  cVar2 = sub_08128A9C(uVar1,0xc);
  if (cVar2 == '\0') {
    cVar2 = sub_08128A24(uVar1,0xc);
    sub_080A1E90(param_1 + 0x54,cVar2 + -1,*(undefined *)(param_1 + 0xb4));
  }
  else {
    sub_080E0E7C(param_1 + 0x54,*(undefined *)(param_1 + 0xb4),param_1 + 0xb5);
  }
  return in_lr;
}

