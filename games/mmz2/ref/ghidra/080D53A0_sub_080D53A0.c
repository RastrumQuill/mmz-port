// sub_080D53A0 at 0x080D53A0 (thumb)

undefined8
sub_080D53A0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_080D62C4(*(undefined4 *)(param_1 + 0x28),param_2,&local_1c,param_5,param_6,param_7);
  if (((local_1c + 0x2800U < 0x5001) && (local_18 + 0x2800U < 0x5001)) &&
     (local_1c * local_1c + local_18 * local_18 < 0x6400001)) {
    local_1c = local_1c + *param_2;
    local_18 = local_18 + param_2[1];
    sub_080D5200(param_2,&local_1c,param_3,param_4,0x60,0x60,0x60,0x380,0x18,0x70,2);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

