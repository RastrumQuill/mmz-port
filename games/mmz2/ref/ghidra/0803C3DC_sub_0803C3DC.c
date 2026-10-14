// sub_0803C3DC at 0x0803C3DC (thumb)

undefined8 sub_0803C3DC(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_2 + 0xd) < 5) && (*(char *)(param_2 + 0x2b6) == '\x01')) &&
     (param_1 == *(int *)(param_2 + 0x2c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

