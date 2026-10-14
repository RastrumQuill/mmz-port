// sub_080B7E10 at 0x080B7E10 (thumb)

undefined4 sub_080B7E10(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080B4350(param_1,(undefined4 *)(param_1 + 0xbc),param_1 + 0x54,param_1 + 0xcc,2,0,
                       0xfffff400);
  if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
  }
  else if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080B7D84(param_1);
  }
  return in_lr;
}

