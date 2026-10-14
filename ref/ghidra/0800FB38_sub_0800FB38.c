// sub_0800FB38 at 0x0800FB38 (thumb)

undefined4 sub_0800FB38(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_02022cd0;
  if ((-1 < DAT_02022cdc) && ((DAT_02022b6e & 1) == 0)) {
    sub_080BC174("00:00\'0",0x13,1);
    uVar2 = sub_080C8AD0(DAT_02022cdc,0xe10);
    sub_080BC1C8(uVar2,0x14,1);
    uVar2 = sub_080C8AD0(DAT_02022cdc,0x3c);
    uVar2 = sub_080C8B68(uVar2,0x3c);
    sub_080BC1C8(uVar2,0x17,1);
    iVar3 = sub_080C8B68(DAT_02022cdc,0x3c);
    uVar2 = sub_080C8AD0(iVar3 * 100,0x3c);
    sub_080BC1C8(uVar2,0x1a,1);
  }
  if (param_1 == '\0') {
    sub_08013BC4(&DAT_02022c44);
    if (DAT_02022c5c != '\0') {
      sub_080061F8(&DAT_02022c7c);
    }
    sub_08013BD0(&DAT_02022c44);
  }
  if (DAT_02022c5c != '\0') {
    sub_080062D4(uVar1);
  }
  sub_08013BEC(&DAT_02022c44);
  return in_lr;
}

