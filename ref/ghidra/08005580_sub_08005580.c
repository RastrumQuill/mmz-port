// sub_08005580 at 0x08005580 (thumb)

undefined4 sub_08005580(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08005ED8();
  uVar1 = (uint)DAT_02004fa2;
  if (uVar1 == 0) {
    DAT_02004fbc = uVar1;
    DAT_02004fc0 = uVar1;
    DAT_02004fc4 = uVar1;
    sub_08005F50(&DAT_02004fa4,&DAT_02004fb4);
    sub_08005F50(&DAT_02004fa4,&DAT_02004fb8);
    sub_08005F50(&DAT_02004fa8,&DAT_02004fb0);
    sub_08005F50(&DAT_02004fa8,&DAT_02004fb8);
    sub_08005F50(&DAT_02004fac,&DAT_02004fb4);
    sub_08005F50(&DAT_02004fac,&DAT_02004fb0);
    sub_08005F50(&DAT_02004fac,&DAT_02004fb8);
  }
  else {
    DAT_02004fa2 = DAT_02004fa2 - 1;
  }
  return in_lr;
}

