// sub_08028B18 at 0x08028B18 (thumb)

undefined4 sub_08028B18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (('\0' < *(char *)(param_1 + 0x71)) && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xf) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar1 = sub_080378D8(param_1,0);
    uVar2 = sub_0803792C(param_1,0);
    sub_080AD2AC(uVar1,uVar2,1);
    *(undefined *)(param_1 + 0x193) = 0xf0;
    sub_0801E6AC(0xb);
  }
  return in_lr;
}

