// sub_08033F6C at 0x08033F6C (thumb)

undefined8 sub_08033F6C(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x218) & 0x20) == 0) {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 1;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 1;
    uVar1 = 0x37;
    cVar3 = (char)param_2 + '\x0e';
    *(bool *)(param_1 + 0x2b8) = *(char *)(param_1 + 0x1fc) == '\x05';
  }
  else {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 2;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 1;
    uVar1 = 0x39;
    iVar2 = 2 - param_2;
    param_2 = -iVar2 + 4;
    if (*(char *)(param_1 + 0x215) == '\x01') {
      *(undefined *)(param_1 + 0x2b8) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x2b8) = 0;
    }
    cVar3 = (char)-iVar2 + '\x18';
  }
  sub_0801EA38(param_1,uVar1,0,param_2);
  *(char *)(param_1 + 0x2b9) = cVar3;
  return CONCAT44(in_lr,3);
}

